/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>
#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage <IDSSocketPairMessage> {

	unsigned long long _payloadOffset;
	unsigned long long _payloadLength;
	unsigned short _isResponse;
	unsigned short _type;
	NSData* _data;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	char _expectsPeerResponse;
	char _wantsAppAck;
	char _compressed;
	char _didWakeHint;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) unsigned short isResponse;                      //@synthesize isResponse=_isResponse - In the implementation block
@property (nonatomic,readonly) unsigned short type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) char expectsPeerResponse;                       //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (nonatomic,readonly) char wantsAppAck;                               //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign,nonatomic) char compressed;                                  //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) char didWakeHint;                                 //@synthesize didWakeHint=_didWakeHint - In the implementation block
@property (nonatomic,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * messageUUID;                         //@synthesize messageUUID=_messageUUID - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                              //@synthesize expiryDate=_expiryDate - In the implementation block
-(NSData *)data;
-(unsigned short)type;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned char)command;
-(unsigned short)isResponse;
-(NSString *)messageUUID;
-(char)wantsAppAck;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(char)expectsPeerResponse;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(char)didWakeHint;
-(NSString *)peerResponseIdentifier;
-(char)compressed;
-(void)setCompressed:(char)arg1 ;
-(void)setDidWakeHint:(char)arg1 ;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(char)arg3 wantsAppAck:(char)arg4 compressed:(char)arg5 didWakeHint:(char)arg6 peerResponseIdentifier:(id)arg7 messageUUID:(id)arg8 expiryDate:(id)arg9 protobuf:(id)arg10 ;
@end

