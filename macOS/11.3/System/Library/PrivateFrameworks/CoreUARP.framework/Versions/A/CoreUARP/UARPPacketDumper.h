/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPPacketDumper : NSObject {

	pcapRef _pcap;
	pcap_dumperRef _dumper;
	unsigned _bloodhoundPacketType;

}
-(void)dealloc;
-(id)initWithFileName:(id)arg1 ;
-(void)dump:(id)arg1 accessoryID:(id)arg2 uarpStatus:(unsigned)arg3 direction:(unsigned long long)arg4 ;
@end

