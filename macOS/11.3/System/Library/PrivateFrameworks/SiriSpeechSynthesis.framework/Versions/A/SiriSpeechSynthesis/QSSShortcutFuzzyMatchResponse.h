/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface QSSShortcutFuzzyMatchResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ShortcutFuzzyMatchResponse* _root;

}

@property (nonatomic,readonly) NSString * utterance; 
@property (nonatomic,readonly) NSArray * shortcut_score_pairs; 
@property (nonatomic,readonly) int return_code; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)utterance;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutFuzzyMatchResponse*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ShortcutFuzzyMatchResponse*)arg2 ;
-(int)return_code;
-(NSArray *)shortcut_score_pairs;
@end

