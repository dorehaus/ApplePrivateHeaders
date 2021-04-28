/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/Versions/A/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NAUAnalyticsEnvelopeTracker : NSObject
+(void)registerEnvelopesAsReceivedByUploader:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3 ;
+(void)registerEnvelopeContentTypesAsUploaded:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1 ;
+(void)_registerContentTypes:(id)arg1 withEventName:(id)arg2 ;
+(void)_registerEnvelopes:(id)arg1 withEventName:(id)arg2 ;
+(id)_contentTypeProperty;
+(id)_daysSinceSubmissionDateProperty;
+(void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1 ;
+(void)registerEnvelopesAsCreated:(id)arg1 ;
+(void)registerEnvelopesAsSubmittedToUploader:(id)arg1 ;
@end

