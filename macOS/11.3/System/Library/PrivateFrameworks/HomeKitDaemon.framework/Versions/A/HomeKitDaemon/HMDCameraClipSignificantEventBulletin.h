/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSUUID, NSURL, NSDate, HMDCameraProfile, HMDHome, HMDAccessory, HMDService, NSString, NSDictionary;

@interface HMDCameraClipSignificantEventBulletin : NSObject {

	char _shouldShowProvideFeedbackButton;
	NSSet* _significantEvents;
	NSUUID* _previewImageNotificationUUID;
	NSURL* _previewImageFilePathURL;
	NSDate* _dateOfOccurrence;
	HMDCameraProfile* _camera;
	HMDHome* _home;
	HMDAccessory* _accessory;
	HMDService* _service;
	NSUUID* _clipUUID;
	NSString* _title;
	NSString* _body;
	NSString* _threadIdentifier;
	NSString* _requestIdentifier;

}

@property (copy,readonly) NSSet * significantEvents;                          //@synthesize significantEvents=_significantEvents - In the implementation block
@property (copy,readonly) NSUUID * previewImageNotificationUUID;              //@synthesize previewImageNotificationUUID=_previewImageNotificationUUID - In the implementation block
@property (readonly) NSURL * previewImageFilePathURL;                         //@synthesize previewImageFilePathURL=_previewImageFilePathURL - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                          //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
@property (readonly) HMDCameraProfile * camera;                               //@synthesize camera=_camera - In the implementation block
@property (readonly) HMDHome * home;                                          //@synthesize home=_home - In the implementation block
@property (readonly) HMDAccessory * accessory;                                //@synthesize accessory=_accessory - In the implementation block
@property (readonly) HMDService * service;                                    //@synthesize service=_service - In the implementation block
@property (copy,readonly) NSUUID * clipUUID;                                  //@synthesize clipUUID=_clipUUID - In the implementation block
@property (readonly) char shouldShowProvideFeedbackButton;                    //@synthesize shouldShowProvideFeedbackButton=_shouldShowProvideFeedbackButton - In the implementation block
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * body;                                    //@synthesize body=_body - In the implementation block
@property (copy,readonly) NSString * threadIdentifier;                        //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (copy,readonly) NSString * requestIdentifier;                       //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(id)localizedMessageForSignificantEvents:(id)arg1 cameraName:(id)arg2 ;
+(id)actionURLForHomeUUID:(id)arg1 cameraUUID:(id)arg2 ;
+(unsigned long long)effectiveReasonForSignificantEvent:(id)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(HMDService *)service;
-(HMDHome *)home;
-(HMDAccessory *)accessory;
-(NSString *)body;
-(NSString *)threadIdentifier;
-(NSString *)requestIdentifier;
-(HMDCameraProfile *)camera;
-(NSSet *)significantEvents;
-(NSDate *)dateOfOccurrence;
-(NSUUID *)clipUUID;
-(NSURL *)previewImageFilePathURL;
-(char)shouldShowProvideFeedbackButton;
-(id)initWithSignificantEvents:(id)arg1 previewImageNotificationUUID:(id)arg2 previewImageFilePathURL:(id)arg3 dateOfOccurrence:(id)arg4 camera:(id)arg5 home:(id)arg6 accessory:(id)arg7 recordingService:(id)arg8 requestIdentifier:(id)arg9 clipUUID:(id)arg10 shouldShowProvideFeedbackButton:(char)arg11 ;
-(NSUUID *)previewImageNotificationUUID;
-(id)initWithSignificantEvents:(id)arg1 previewImageNotificationUUID:(id)arg2 previewImageFilePathURL:(id)arg3 dateOfOccurrence:(id)arg4 camera:(id)arg5 home:(id)arg6 accessory:(id)arg7 recordingService:(id)arg8 clipUUID:(id)arg9 shouldShowProvideFeedbackButton:(char)arg10 ;
-(id)initWithSignificantEvent:(id)arg1 previewImageFilePathURL:(id)arg2 dateOfOccurrence:(id)arg3 camera:(id)arg4 home:(id)arg5 accessory:(id)arg6 recordingService:(id)arg7 shouldShowProvideFeedbackButton:(char)arg8 ;
@end

