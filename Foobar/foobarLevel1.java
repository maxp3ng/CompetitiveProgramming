import java.lang.Math;
import java.util.ArrayList;

class foobarLevel1{
	public static int[] solution(int area) {
		
		int n = (int)Math.floor(Math.sqrt(area));
		ArrayList<Integer> output = new ArrayList<Integer>();

		for (int i = n; i > 0; i--){
			int sizePanel = (int)Math.pow(i,2);
			while(sizePanel <= area){
				area -= sizePanel;
				output.add(sizePanel);
			}
			
			if (area == 0){
				int[] outputArray = new int[output.size()];
				for (int j = 0; j < output.size(); j++){
					outputArray[j] = output.get(j);
				}
				return outputArray;
			}
		}
		return null;
	 }
	public static void main(String args[]){
		System.out.println(solution(15324));
	}	
}
