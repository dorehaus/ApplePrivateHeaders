/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MifareSubDecoder
@required
+(BOOL)canDecodeSPId:(unsigned char)arg1;
+(id)getServiceProvider:(unsigned char)arg1;
+(id)getEmReentryDelayMs;
+(BOOL)didTransactionError:(const /*function pointer*/void**)arg1 withTransactionResult:(unsigned short*)arg2;
+(BOOL)supportsPlasticCardMode:(unsigned char)arg1 withTransceiver:(id)arg2;
+(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5;

@end
