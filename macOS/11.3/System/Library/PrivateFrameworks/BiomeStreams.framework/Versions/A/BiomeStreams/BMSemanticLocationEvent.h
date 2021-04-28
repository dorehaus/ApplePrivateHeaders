/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString;

@interface BMSemanticLocationEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper> {

	char _starting;
	unsigned long long _label;

}

@property (nonatomic,readonly) unsigned long long label;                   //@synthesize label=_label - In the implementation block
@property (assign,getter=isStarting,nonatomic) char starting;              //@synthesize starting=_starting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned dataVersion; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)label;
-(id)serialize;
-(unsigned)dataVersion;
-(id)initWithProtoData:(id)arg1 ;
-(id)encodeAsProto;
-(id)proto;
-(id)initWithProto:(id)arg1 ;
-(char)isStarting;
-(void)setStarting:(char)arg1 ;
-(id)initWithLabel:(unsigned long long)arg1 starting:(BOOL)arg2 ;
@end

