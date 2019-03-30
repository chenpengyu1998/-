package leetcode;

public class NB {
	//症状
	public static String[] Symptom = {"sneeze","sneeze","headache","headache","sneeze","headache"};
	//职业
	public static String[] Job = {"nurse","farmer","builder","builder","teacher","teacher"};
	//疾病
	public static String[] Illness= {"cold","allergy","COB","cold","cold","COB"};
	public static double NBTest(String[] S,String[] J,String[] I,String symptom,String job,String ill) {
		//P(A|B) = P(B|A) P(A) / P(B)
		//p=P(症状|疾病) x P(职业|疾病) x P(疾病) / P(症状) x P(职业)
		double sum_S=0,sum_J=0,sum_I=0,P_SI=0,P_JI=0;
		for(int i=0;i<S.length;i++) {
			if(S[i].equals(symptom)) {
				sum_S++;
				if(I[i].equals(ill)) {
					P_SI++;
				}
			}
			if(I[i].equals(ill)) {
				sum_I++;
				if(J[i].equals(job)) {
					P_JI++;
				}
			}
			if(J[i].equals(job)) {
				sum_J++;
			}
		}
		return (P_SI/sum_S)*(P_JI/sum_I)*(sum_I/I.length)/((sum_S/S.length)*(sum_J/J.length));

		
		
	}
	
	public static void main(String[] args) {
		System.out.println("概率是"+NBTest(Symptom,Job,Illness,"sneeze","builder","cold")*100+"%");
	}
	
	
}
