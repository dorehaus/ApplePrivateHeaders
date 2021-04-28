/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKWakeScreenRequest : CATTaskRequest {

	char _shouldBecomeExclusive;

}

@property (assign,nonatomic) char shouldBecomeExclusive;              //@synthesize shouldBecomeExclusive=_shouldBecomeExclusive - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)shouldBecomeExclusive;
-(void)setShouldBecomeExclusive:(char)arg1 ;
@end
