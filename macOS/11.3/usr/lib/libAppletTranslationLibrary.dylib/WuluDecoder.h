/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/ATLStatefulDecoder.h>

@interface WuluDecoder : NSObject <ATLStatefulDecoder> {

	unsigned long long decoderState;
	char debug;

}
+(id)getInstance;
-(id)init;
-(void)cleanup;
-(id)getState:(id)arg1 ;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)getAppletStateAndHistory:(id)arg1 withError:(id*)arg2 ;
-(id)setTimer:(id)arg1 history:(id)arg2 ;
-(id)getHistory:(id)arg1 error:(id*)arg2 ;
-(id)adjustHistory:(id)arg1 ;
-(void)adjustState:(id)arg1 history:(id)arg2 ctx:(id)arg3 ;
-(id)parseFile18:(id)arg1 ;
-(void)parseTransit:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 ctx:(id)arg4 into:(id)arg5 ;
-(unsigned)convertAppletSNtoWalletSN:(unsigned short)arg1 txnTypeIdentifier:(unsigned)arg2 ;
-(id)resolveTransitModality:(unsigned char)arg1 ;
-(void)parseTransitApollo:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(void)parseTransitKepler:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(void)parseTransitPioneer:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 into:(id)arg4 ;
-(void)parseTransitGalileo:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 ctx:(id)arg4 into:(id)arg5 ;
-(void)parseTransitSettingBased:(id)arg1 file1E:(id)arg2 file1A:(id)arg3 ctx:(id)arg4 into:(id)arg5 ;
-(id)getStationCode:(id)arg1 codeSetting:(id)arg2 swapByteOrdering:(id)arg3 convertFormat:(id)arg4 cityCode:(id)arg5 ;
-(BOOL)isMetroEntry:(id)arg1 cityCode:(id)arg2 setting:(id)arg3 error:(id*)arg4 ;
-(void)removeEnRouteForSingleTapBusGuangdong:(id)arg1 transaction:(id)arg2 cityCode:(id)arg3 ;
-(void)setMetroEntryWithLocalLog:(id)arg1 ctx:(id)arg2 ;
-(void)removeDoubleMetroTapGuangdong:(id)arg1 history:(id)arg2 cityCode:(id)arg3 ;
-(void)addFakeBusTxnGuangdong:(id)arg1 history:(id)arg2 cityCode:(id)arg3 ;
-(id)findNextCappPuchaseEntry:(id)arg1 history:(id)arg2 ;
-(unsigned short)convertWalletSNtoAppletSN:(id)arg1 ;
-(id)parseStartEvent:(id)arg1 withApplet:(id)arg2 withError:(id*)arg3 ;
-(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 withError:(id*)arg3 ;
-(id)DecodeEndE1TLV:(const SCD_Struct_He0*)arg1 error:(id*)arg2 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end

