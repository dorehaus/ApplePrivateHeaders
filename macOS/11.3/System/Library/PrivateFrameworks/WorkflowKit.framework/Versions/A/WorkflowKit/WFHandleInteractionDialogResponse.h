/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFHandleInteractionDialogResponse : WFDialogResponse <NSSecureCoding> {

	unsigned long long _interactionResponseCode;

}

@property (nonatomic,readonly) unsigned long long interactionResponseCode;              //@synthesize interactionResponseCode=_interactionResponseCode - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInteractionResponseCode:(unsigned long long)arg1 ;
-(unsigned long long)interactionResponseCode;
@end

