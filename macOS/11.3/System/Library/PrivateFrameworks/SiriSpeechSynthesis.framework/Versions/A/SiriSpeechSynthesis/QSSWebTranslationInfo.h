/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface QSSWebTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const WebTranslationInfo* _root;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSArray * spans; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(NSArray *)spans;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const WebTranslationInfo*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::WebTranslationInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const WebTranslationInfo*)arg2 ;
@end

