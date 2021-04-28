/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet, NSURL;


@protocol CalendarSourceModelProtocol <EKProtocolObject>
@property (nonatomic,copy,readonly) NSString * externalSourceIdentifier; 
@property (nonatomic,retain,readonly) NSString * sourceIdentifier; 
@property (nonatomic,retain,readonly) NSString * providerIdentifier; 
@property (nonatomic,retain,readonly) NSString * typeString; 
@property (nonatomic,readonly) NSSet * ownerAddresses; 
@property (nonatomic,readonly) char supportsDropBoxAttachments; 
@property (nonatomic,readonly) char supportsManagedAttachments; 
@property (nonatomic,readonly) char supportsUnbind; 
@property (nonatomic,readonly) char supportsAttendeeComments; 
@property (nonatomic,readonly) char supportsFreebusy; 
@property (nonatomic,readonly) char supportsJunkReporting; 
@property (nonatomic,readonly) char supportsLikenessPropagation; 
@property (nonatomic,readonly) char supportsPhoneNumbers; 
@property (nonatomic,readonly) char supportsPrivateEvents; 
@property (nonatomic,readonly) char supportsSharingScheduling; 
@property (nonatomic,readonly) char requiresOpeningAttachmentAsLink; 
@property (nonatomic,readonly) int displayOrder; 
@property (nonatomic,readonly) NSString * dropBoxPathString; 
@property (nonatomic,readonly) NSURL * serverURL; 
@required
-(NSString *)providerIdentifier;
-(id)title;
-(NSString *)sourceIdentifier;
-(NSString *)typeString;
-(NSURL *)serverURL;
-(char)isDelegate;
-(char)isEnabledForReminders;
-(char)isWritable;
-(int)displayOrder;
-(char)supportsFreebusy;
-(char)isEnabledForEvents;
-(char)requiresOpeningAttachmentAsLink;
-(char)supportsLikenessPropagation;
-(char)supportsPrivateEvents;
-(char)supportsManagedAttachments;
-(char)supportsSharingScheduling;
-(NSSet *)ownerAddresses;
-(char)supportsJunkReporting;
-(char)supportsPhoneNumbers;
-(char)supportsEventCalendarCreation;
-(char)supportsTaskCalendarCreation;
-(NSString *)externalSourceIdentifier;
-(char)supportsDropBoxAttachments;
-(char)supportsUnbind;
-(char)supportsAttendeeComments;
-(NSString *)dropBoxPathString;
-(char)supportsEmailValidation;

@end

