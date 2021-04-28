/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSOrderedSet;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSOrderedSet* _candidates;

}

@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (copy) NSOrderedSet * candidates;              //@synthesize candidates=_candidates - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSOrderedSet *)candidates;
-(void)addCandidate:(id)arg1 ;
-(void)setCandidates:(NSOrderedSet *)arg1 ;
-(id)initWithTitle:(id)arg1 candidates:(id)arg2 ;
-(id)mutableCandidates;
-(char)hasAlternativeText;
@end

