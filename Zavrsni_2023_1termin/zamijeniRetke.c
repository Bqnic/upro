float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1, int inRed2){

    float pom, sum1 = 0.f, sum2 = 0.f;

    for (int i = 0; i < brRed; i++){
        if (indRed1 > inRed2){
            sum1 += polje[indRed1 * brStup + i];
            sum2 += polje[inRed2 * brStup + i];
        }

        else{
            sum1 += polje[inRed2 * brStup + i];
            sum2 += polje[indRed1 * brStup + i];
        }

        pom = polje[indRed1 * brStup + i];
        polje[indRed1 * brStup + i] = polje[inRed2 * brStup + i];
        polje[inRed2 * brStup + i] = pom;
    }
	
    return sum2 - sum1;
}
