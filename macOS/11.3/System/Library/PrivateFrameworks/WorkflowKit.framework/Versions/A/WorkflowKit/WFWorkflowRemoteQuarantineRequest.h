/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class WFWorkflow, NSDictionary, NSString;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest {

	WFWorkflow* _workflow;
	NSDictionary* _workflowJavaScriptCoreRepresentation;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                                        //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) NSDictionary * workflowJavaScriptCoreRepresentation;              //@synthesize workflowJavaScriptCoreRepresentation=_workflowJavaScriptCoreRepresentation - In the implementation block
@property (nonatomic,readonly) NSString * workflowName; 
+(id)JSONKeyPathsByPropertyKey;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(id)policyFunctionName;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)defaultLocalizedDeniedErrorMessage;
-(NSString *)workflowName;
-(id)workflowJavaScriptCoreRepresentationWithError:(id*)arg1 ;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1 ;
-(NSDictionary *)workflowJavaScriptCoreRepresentation;
-(void)setWorkflowJavaScriptCoreRepresentation:(NSDictionary *)arg1 ;
@end

