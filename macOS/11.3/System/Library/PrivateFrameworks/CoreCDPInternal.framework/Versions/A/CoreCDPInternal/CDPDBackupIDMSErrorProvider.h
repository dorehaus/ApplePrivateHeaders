/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CDPDBackupErrorProviderImpl.h>

@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg1 ;
-(char)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg1 ;
-(void)handleSoftLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitError;
-(void)handleHardLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitErrorWithRecord:(id)arg1 ;
-(id)hardLimitErrorForRecord:(id)arg1 ;
@end

