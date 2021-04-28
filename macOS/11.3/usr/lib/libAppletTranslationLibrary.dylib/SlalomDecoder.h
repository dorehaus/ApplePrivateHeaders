/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/ATLStatefulDecoder.h>

@class NSMutableArray, NSNumber;

@interface SlalomDecoder : NSObject <ATLStatefulDecoder> {

	BOOL _eotInProgress;
	NSMutableArray* _hciArray;
	NSNumber* _serviceProvider;

}
+(id)sharedInstance;
-(id)init;
-(void)cleanup;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)parseStartEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
-(id)parseTransactionEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
-(id)parseDeselectEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
-(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 withTransceiver:(id)arg3 error:(id*)arg4 ;
-(id)DecodeStartE1TLV:(const SCD_Struct_He0*)arg1 error:(id*)arg2 ;
-(id)DecodeTransactionE1TLV:(const SCD_Struct_He0*)arg1 error:(id*)arg2 ;
@end
