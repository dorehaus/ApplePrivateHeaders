/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentStateMutating.h>

@class AFExperimentState, NSDate, NSString;

@interface _AFExperimentStateMutation : NSObject <AFExperimentStateMutating> {

	AFExperimentState* _baseModel;
	NSDate* _lastSyncDate;
	char _didEnd;
	NSString* _endingGroupIdentifier;
	NSString* _version;
	struct {
		unsigned isDirty : 1;
		unsigned hasLastSyncDate : 1;
		unsigned hasDidEnd : 1;
		unsigned hasEndingGroupIdentifier : 1;
		unsigned hasVersion : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setVersion:(id)arg1 ;
-(void)setLastSyncDate:(id)arg1 ;
-(void)setDidEnd:(char)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setEndingGroupIdentifier:(id)arg1 ;
@end

