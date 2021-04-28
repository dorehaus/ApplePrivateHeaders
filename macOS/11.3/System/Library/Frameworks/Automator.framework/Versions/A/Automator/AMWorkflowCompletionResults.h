/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface AMWorkflowCompletionResults : NSObject <NSSecureCoding> {

	id _output;
	NSError* _error;
	char _workflowCouldNotStart;

}

@property (retain) id output;                               //@synthesize output=_output - In the implementation block
@property (retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign) char workflowCouldNotStart;              //@synthesize workflowCouldNotStart=_workflowCouldNotStart - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)output;
-(void)setOutput:(id)arg1 ;
-(char)workflowCouldNotStart;
-(void)setWorkflowCouldNotStart:(char)arg1 ;
-(id)initWithOutput:(id)arg1 error:(id)arg2 ;
@end

