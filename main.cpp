int main() {
  int i;
  int a = i + 1;
}

void* perTest2(char *pCA)
{
	Cgxper BusObj;
	tagperTest2 BusParam;

	DEALTRY{
		if( !BusObj.Init(pCA) )
			return NULL;

      BusObj.GetValue( "request", BusParam.sRequest, sizeof(BusParam.sRequest) );

		  BusObj.perTest2(BusParam);
	}DEALCATCH();

	BusObj.Exit();
	return NULL;
}

void* perTest1(char *pCA)
{
	Cgxper BusObj;
	tagperTest2 BusParam = {0x00};

	DEALTRY{
		if( !BusObj.Init(pCA) )
			return NULL;

      BusObj.GetValue( "request", BusParam.sRequest, sizeof(BusParam.sRequest) );

		  BusObj.perTest2(BusParam);
	}DEALCATCH();

	BusObj.Exit();
	return NULL;
}
