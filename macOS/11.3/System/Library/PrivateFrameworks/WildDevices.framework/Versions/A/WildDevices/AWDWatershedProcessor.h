/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WildDevices.framework/Versions/A/WildDevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AWDProcessorProtocol.h>

@class AWDHippoLink, NSMutableData;

@interface AWDWatershedProcessor : NSObject <AWDProcessorProtocol> {

	char* _rxPktMem;
	char* _txPktMem;
	unsigned short _maxPayloadLen;
	AWDHippoLink* _link;
	NSMutableData* _receiveBuffer;

}

@property (__weak) AWDHippoLink * link;                        //@synthesize link=_link - In the implementation block
@property (retain) NSMutableData * receiveBuffer;              //@synthesize receiveBuffer=_receiveBuffer - In the implementation block
@property (assign) unsigned short maxPayloadLen;               //@synthesize maxPayloadLen=_maxPayloadLen - In the implementation block
+(void)initialize;
-(void)terminate;
-(void)setLink:(AWDHippoLink *)arg1 ;
-(AWDHippoLink *)link;
-(void)handleData:(id)arg1 ;
-(Class)classForChannel:(unsigned short)arg1 ;
-(void)setReceiveBuffer:(NSMutableData *)arg1 ;
-(NSMutableData *)receiveBuffer;
-(void)writeData:(id)arg1 forPort:(unsigned short)arg2 ;
-(id)initWithLink:(id)arg1 ;
-(void)setMaxPayloadLen:(unsigned short)arg1 ;
-(unsigned short)maxPayloadLen;
-(void)appendPacket:(id)arg1 forPort:(unsigned short)arg2 withData:(id)arg3 ;
@end

