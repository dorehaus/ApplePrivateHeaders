/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@class NSString, AXSSDialectMap, NSMutableOrderedSet;

@interface AXSSLanguageTag : NSObject {

	char _createdFromNewline;
	NSString* _taggedString;
	long long _offsetToInitialLocation;
	NSString* _content;
	AXSSDialectMap* _dialect;
	NSMutableOrderedSet* _predictedSecondaryDialects;
	NSRange _taggedRange;

}

@property (nonatomic,readonly) NSRange taggedRange;                                         //@synthesize taggedRange=_taggedRange - In the implementation block
@property (nonatomic,copy,readonly) NSString * taggedString;                                //@synthesize taggedString=_taggedString - In the implementation block
@property (assign,nonatomic) long long offsetToInitialLocation;                             //@synthesize offsetToInitialLocation=_offsetToInitialLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * content;                                     //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) AXSSDialectMap * dialect;                                    //@synthesize dialect=_dialect - In the implementation block
@property (nonatomic,readonly) char createdFromNewline;                                     //@synthesize createdFromNewline=_createdFromNewline - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * predictedSecondaryDialects;              //@synthesize predictedSecondaryDialects=_predictedSecondaryDialects - In the implementation block
-(id)description;
-(NSString *)content;
-(NSRange)taggedRange;
-(AXSSDialectMap *)dialect;
-(NSString *)taggedString;
-(id)initWithDialect:(id)arg1 range:(NSRange)arg2 content:(id)arg3 createdFromNewline:(char)arg4 ;
-(char)createdFromNewline;
-(NSMutableOrderedSet *)predictedSecondaryDialects;
-(void)setPredictedSecondaryDialects:(NSMutableOrderedSet *)arg1 ;
-(void)addPredictedSecondaryDialects:(id)arg1 ;
-(long long)offsetToInitialLocation;
-(void)setOffsetToInitialLocation:(long long)arg1 ;
@end

