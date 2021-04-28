/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _LTTranslationSense : NSObject <NSSecureCoding> {

	char _phrasebookMatch;
	NSString* _senseID;
	NSString* _definition;
	NSString* _sourceMatch;
	NSString* _targetMatch;
	NSArray* _labels;

}

@property (assign,getter=isPhrasebookMatch,nonatomic) char phrasebookMatch;              //@synthesize phrasebookMatch=_phrasebookMatch - In the implementation block
@property (nonatomic,copy) NSString * senseID;                                           //@synthesize senseID=_senseID - In the implementation block
@property (nonatomic,copy) NSString * definition;                                        //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy) NSString * sourceMatch;                                       //@synthesize sourceMatch=_sourceMatch - In the implementation block
@property (nonatomic,copy) NSString * targetMatch;                                       //@synthesize targetMatch=_targetMatch - In the implementation block
@property (nonatomic,copy) NSArray * labels;                                             //@synthesize labels=_labels - In the implementation block
+(char)supportsSecureCoding;
+(id)senseFromDictionary:(id)arg1 ;
+(id)sensesFromArray:(id)arg1 ;
+(id)senseWithPhrasebookMatchMeta:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)definition;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(id)jsonRepresentation;
-(void)setDefinition:(NSString *)arg1 ;
-(void)setSenseID:(NSString *)arg1 ;
-(NSString *)senseID;
-(void)setPhrasebookMatch:(char)arg1 ;
-(char)isPhrasebookMatch;
-(void)setSourceMatch:(NSString *)arg1 ;
-(void)setTargetMatch:(NSString *)arg1 ;
-(NSString *)sourceMatch;
-(NSString *)targetMatch;
@end
