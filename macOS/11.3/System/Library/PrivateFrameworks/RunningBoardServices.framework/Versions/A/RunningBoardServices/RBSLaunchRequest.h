/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSRequest.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSLaunchContext, NSString;

@interface RBSLaunchRequest : RBSRequest <RBSXPCSecureCoding, NSCopying> {

	RBSLaunchContext* _context;

}

@property (nonatomic,readonly) RBSLaunchContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsRBSXPCSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithContext:(id)arg1 ;
-(char)execute:(out id*)arg1 error:(out id*)arg2 ;
-(RBSLaunchContext *)context;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(char)execute:(out id*)arg1 ;
-(char)execute:(out id*)arg1 assertion:(out id*)arg2 error:(out id*)arg3 ;
@end
