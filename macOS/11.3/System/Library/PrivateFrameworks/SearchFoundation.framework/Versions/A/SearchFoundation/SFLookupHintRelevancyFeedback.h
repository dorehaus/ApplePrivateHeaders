/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFLookupHintRelevancyFeedback : SFFeedback {

	char _discarded;
	NSString* _context;
	NSString* _domain;
	unsigned long long _grade;
	NSRange _hintRange;

}

@property (nonatomic,copy) NSString * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) NSRange hintRange;                     //@synthesize hintRange=_hintRange - In the implementation block
@property (nonatomic,copy) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) char discarded;                        //@synthesize discarded=_discarded - In the implementation block
@property (assign,nonatomic) unsigned long long grade;              //@synthesize grade=_grade - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(unsigned long long)grade;
-(void)setGrade:(unsigned long long)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setHintRange:(NSRange)arg1 ;
-(void)setDiscarded:(char)arg1 ;
-(NSRange)hintRange;
-(char)discarded;
-(id)initWithContext:(id)arg1 hintRange:(NSRange)arg2 domain:(id)arg3 discarded:(char)arg4 grade:(unsigned long long)arg5 ;
@end

