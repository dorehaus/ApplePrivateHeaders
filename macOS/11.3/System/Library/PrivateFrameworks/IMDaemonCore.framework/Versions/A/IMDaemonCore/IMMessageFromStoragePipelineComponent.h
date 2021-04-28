/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDMessageFromStorageController, NSString;

@interface IMMessageFromStoragePipelineComponent : IMPipelineComponent {

	unsigned long long _processingType;
	id _broadcaster;
	IMDMessageFromStorageController* _storageController;
	NSString* _service;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithStorageProcessingType:(unsigned long long)arg1 storageController:(id)arg2 broadcaster:(id)arg3 account:(id)arg4 ;
@end

