/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DTXConnectionServices.framework/Versions/A/DTXConnectionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSecureCodingNSObject;
#import <DTXConnectionServices/DTXConnectionServices-Structs.h>
@class NSData, NSDictionary, NSError;

@interface DTXMessage : NSObject {

	unsigned _messageType;
	int _compressionType;
	unsigned _status;
	NSData* _payloadData;
	unsigned long long _cost;
	NSData* _serializedData;
	id<NSSecureCoding><NSObject> _payloadObject;
	void* _auxiliary;
	AB _immutable;
	char _deserialized;
	char _expectsReply;
	unsigned _identifier;
	unsigned _channelCode;
	unsigned _conversationIndex;
	NSDictionary* _auxiliaryPromoted;

}

@property (assign,nonatomic) unsigned messageType; 
@property (nonatomic,copy) id<NSSecureCoding><NSObject> payloadObject; 
@property (nonatomic,readonly) char deserialized;                                   //@synthesize deserialized=_deserialized - In the implementation block
@property (nonatomic,readonly) char isDispatch; 
@property (nonatomic,readonly) char isBarrier; 
@property (nonatomic,readonly) unsigned long long cost;                             //@synthesize cost=_cost - In the implementation block
@property (nonatomic,retain) NSError * error; 
@property (assign,nonatomic) unsigned errorStatus;                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char expectsReply;                                     //@synthesize expectsReply=_expectsReply - In the implementation block
@property (assign,nonatomic) unsigned identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned channelCode;                                  //@synthesize channelCode=_channelCode - In the implementation block
@property (assign,nonatomic) unsigned conversationIndex;                            //@synthesize conversationIndex=_conversationIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long serializedLength; 
@property (nonatomic,readonly) id<NSSecureCoding><NSObject> object; 
@property (nonatomic,readonly) NSData * data;                                       //@synthesize payloadData=_payloadData - In the implementation block
+(void)initialize;
+(id)message;
+(id)messageWithBuffer:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)messageWithData:(id)arg1 ;
+(id)defaultAllowedSecureCodingClasses;
+(id)messageWithSelector:(SEL)arg1 typesAndArguments:(unsigned)arg2 ;
+(id)messageWithSelector:(SEL)arg1 objectArguments:(id)arg2 ;
+(void)setReportCompressionBlock:(/*^block*/id)arg1 ;
+(id)messageWithObject:(id)arg1 ;
+(id)messageWithError:(id)arg1 ;
+(id)messageReferencingBuffer:(const void*)arg1 length:(unsigned long long)arg2 destructor:(/*^block*/id)arg3 ;
+(id)messageWithPrimitive:(void*)arg1 ;
+(id)messageWithSelector:(SEL)arg1 arguments:(id)arg2 ;
+(BOOL)extractSerializedCompressionInfoFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 compressionType:(int*)arg3 uncompressedLength:(unsigned long long*)arg4 compressedDataOffset:(unsigned long long*)arg5 ;
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(id<NSSecureCoding><NSObject>)object;
-(NSError *)error;
-(unsigned)identifier;
-(void)setError:(NSError *)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)initWithInvocation:(id)arg1 ;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageType;
-(char)expectsReply;
-(unsigned long long)cost;
-(unsigned long long)serializedLength;
-(id)objectWithAllowedClasses:(id)arg1 ;
-(void)setErrorStatus:(unsigned)arg1 ;
-(void)_makeImmutable;
-(unsigned)channelCode;
-(void)compressWithCompressor:(id)arg1 usingType:(int)arg2 forCompatibilityWithVersion:(long long)arg3 ;
-(void)_makeBarrier;
-(unsigned)conversationIndex;
-(char)deserialized;
-(char)isDispatch;
-(char)isBarrier;
-(id)newReplyWithError:(id)arg1 ;
-(id)newReply;
-(char)shouldInvokeWithTarget:(id)arg1 ;
-(void)invokeWithTarget:(id)arg1 replyChannel:(id)arg2 validator:(/*^block*/id)arg3 ;
-(unsigned)errorStatus;
-(id)descriptionWithRoutingInformation:(DTXMessageRoutingInfo)arg1 ;
-(id)initWithSerializedForm:(const char*)arg1 length:(unsigned long long)arg2 destructor:(/*^block*/id)arg3 compressor:(id)arg4 ;
-(void)setExpectsReply:(char)arg1 ;
-(void)setChannelCode:(unsigned)arg1 ;
-(void)setConversationIndex:(unsigned)arg1 ;
-(void)serializedFormApply:(/*^block*/id)arg1 ;
-(void)setPayloadObject:(id<NSSecureCoding><NSObject>)arg1 ;
-(void)_setPayloadBuffer:(const char*)arg1 length:(unsigned long long)arg2 shouldCopy:(char)arg3 destructor:(/*^block*/id)arg4 ;
-(void)_appendTypesAndValues:(unsigned)arg1 withKey:(id)arg2 list:(_va_list_tag*)arg3 ;
-(id)initWithSelector:(SEL)arg1 firstArg:(id)arg2 remainingObjectArgs:(_va_list_tag*)arg3 ;
-(id)initWithSelector:(SEL)arg1 objects:(id)arg2 ;
-(void)_willModifyAuxiliary;
-(id)_mutableAuxiliaryDictionary;
-(id)_faultAuxiliaryValueOfType:(Class)arg1 forKey:(id)arg2 ;
-(id<NSSecureCoding><NSObject>)payloadObject;
-(id)newReplyWithObject:(id)arg1 ;
-(id)_decompressedData:(id)arg1 compressor:(id)arg2 compressionType:(int)arg3 ;
-(id)_initWithReferencedSerializedForm:(id)arg1 compressor:(id)arg2 payloadSet:(/*^block*/id)arg3 ;
-(id)newReplyWithMessage:(id)arg1 ;
-(id)newReplyReferencingBuffer:(const void*)arg1 length:(unsigned long long)arg2 destructor:(/*^block*/id)arg3 ;
-(const void*)getBufferWithReturnedLength:(unsigned long long*)arg1 ;
-(void)setObject:(id)arg1 forMessageKey:(id)arg2 ;
-(void)setString:(id)arg1 forMessageKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forMessageKey:(id)arg2 ;
-(void)setData:(id)arg1 forMessageKey:(id)arg2 ;
-(long long)integerForMessageKey:(id)arg1 ;
-(id)stringForMessageKey:(id)arg1 ;
-(id)dataForMessageKey:(id)arg1 ;
-(id)valueForMessageKey:(id)arg1 ;
-(id)initWithSerializedForm:(id)arg1 compressor:(id)arg2 ;
@end
