/*
void del()

{

    clrscr ();
    ct=count();
    i=0;
    temp=((book *) calloc(ct,sizeof(book)));
    fpsrt = fopen("phbook.txt","r");
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){       //Reads the records and stores into it's memory
	temp[i] = tmp;
	i++;
    }

    fclose(fpsrt);

    fp = fopen("phbook.txt","w");
    if(fp==NULL){
	printf("  Error while opening the file\n");
    }
    for(i=0; i<ct; i++){
	if(temp[i].number==0){
	    continue;
	}
	fwrite(&temp[i],sizeof(temp[i]),1,fp);
    }
    fclose(fp);
    free(temp);

} */