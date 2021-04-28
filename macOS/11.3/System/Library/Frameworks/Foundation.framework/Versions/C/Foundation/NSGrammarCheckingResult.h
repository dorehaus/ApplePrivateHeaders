/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSArray* _details;

}
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 details:(id)arg2 ;
-(unsigned long long)resultType;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(char)_adjustRangesWithOffset:(long long)arg1 ;
-(id)grammarDetails;
@end

