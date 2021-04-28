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

@class NSMutableDictionary, NSData, QSSRecognitionSausage, NSArray;

@interface QSSRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionResult* _root;

}

@property (nonatomic,readonly) QSSRecognitionSausage * pre_itn; 
@property (nonatomic,readonly) QSSRecognitionSausage * post_itn; 
@property (nonatomic,readonly) NSArray * pre_itn_nbest_choices; 
@property (nonatomic,readonly) NSArray * post_itn_nbest_choices; 
@property (nonatomic,readonly) NSArray * pre_itn_token_to_post_itn_char_alignment; 
@property (nonatomic,readonly) NSArray * choice_alignments; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionResult*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::RecognitionResult>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionResult*)arg2 ;
-(QSSRecognitionSausage *)pre_itn;
-(QSSRecognitionSausage *)post_itn;
-(NSArray *)pre_itn_nbest_choices;
-(NSArray *)post_itn_nbest_choices;
-(NSArray *)pre_itn_token_to_post_itn_char_alignment;
-(NSArray *)choice_alignments;
@end
