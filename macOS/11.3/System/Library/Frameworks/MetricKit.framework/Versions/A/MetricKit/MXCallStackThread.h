/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetricKit.framework/Versions/A/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding> {

	char _attributedThread;
	NSArray* _topFrames;

}

@property (readonly) char attributedThread;              //@synthesize attributedThread=_attributedThread - In the implementation block
@property (readonly) NSArray * topFrames;                //@synthesize topFrames=_topFrames - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithTopCallStackFrames:(id)arg1 isAttributedThread:(char)arg2 ;
-(char)attributedThread;
-(NSArray *)topFrames;
@end
