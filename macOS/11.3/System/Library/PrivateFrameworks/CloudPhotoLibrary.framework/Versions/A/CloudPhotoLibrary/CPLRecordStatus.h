/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLRecordChange, NSString;

@interface CPLRecordStatus : NSObject <NSSecureCoding> {

	SCD_Union_CP6 _status;
	CPLRecordChange* _record;
	unsigned long long _generation;

}

@property (nonatomic,readonly) unsigned long long generation;                              //@synthesize generation=_generation - In the implementation block
@property (assign,getter=isUnknown,nonatomic) char unknown; 
@property (assign,getter=isQuarantined,nonatomic) char quarantined; 
@property (assign,getter=isResetting,nonatomic) char resetting; 
@property (assign,getter=isUploaded,nonatomic) char uploaded; 
@property (assign,getter=isWaitingForUpload,nonatomic) char waitingForUpload; 
@property (assign,getter=isUploading,nonatomic) char uploading; 
@property (assign,getter=isWaitingForUpdate,nonatomic) char waitingForUpdate; 
@property (assign,getter=isUpdating,nonatomic) char updating; 
@property (assign,getter=isConfirmed,nonatomic) char confirmed; 
@property (nonatomic,readonly) CPLRecordChange * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) NSString * statusDescription; 
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)generation;
-(char)isUpdating;
-(char)isUploaded;
-(char)isUploading;
-(CPLRecordChange *)record;
-(void)setUploaded:(char)arg1 ;
-(void)setUploading:(char)arg1 ;
-(void)setConfirmed:(char)arg1 ;
-(void)setUpdating:(char)arg1 ;
-(void)setUnknown:(char)arg1 ;
-(NSString *)statusDescription;
-(char)isConfirmed;
-(char)isQuarantined;
-(char)isUnknown;
-(void)setQuarantined:(char)arg1 ;
-(char)isResetting;
-(void)setResetting:(char)arg1 ;
-(char)isWaitingForUpload;
-(void)setWaitingForUpload:(char)arg1 ;
-(char)isWaitingForUpdate;
-(void)setWaitingForUpdate:(char)arg1 ;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 ;
@end
