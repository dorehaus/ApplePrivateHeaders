/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMApplicationStubController;

@interface AMApplicationStub : NSObject {

	id _applicationStubController;

}

@property (retain) AMApplicationStubController * applicationStubController;              //@synthesize applicationStubController=_applicationStubController - In the implementation block
@property (nonatomic,readonly) char stayOpen; 
@property (assign,nonatomic) char displayInMenuBar; 
-(id)init;
-(char)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id*)arg3 ;
-(void)setApplicationStubController:(AMApplicationStubController *)arg1 ;
-(AMApplicationStubController *)applicationStubController;
-(char)stayOpen;
-(void)_presentRecoverableErrorAndTerminateIfNeeded:(id)arg1 ;
-(void)setDisplayInMenuBar:(char)arg1 ;
-(char)displayInMenuBar;
-(char)loadWorkflowAtPath:(id)arg1 error:(id*)arg2 ;
@end
