/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AOSUI/AOSUI-Structs.h>
@interface MMURLRequestFactory : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedURLRequestFactory;
+(id)parameterizedStorageURL:(id)arg1 account:(id)arg2 dsid:(id)arg3 authToken:(id)arg4 ;
+(id)parameterizedStorageWithURL:(id)arg1 forAccount:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)urlRequestFromInfo:(id)arg1 ;
-(id)appleIDURLRequestForKey:(id)arg1 method:(id)arg2 accountID:(id)arg3 error:(id*)arg4 ;
-(id)accountStorageURLRequestForAccount:(id)arg1 withQueryParam:(id)arg2 ;
-(id)accountQuotaURLRequest:(id)arg1 ;
-(id)_urlInfoForKey:(id)arg1 accountID:(id)arg2 error:(id*)arg3 ;
-(id)urlRequestForiCloudWithInfo:(id)arg1 forAccountID:(id)arg2 ;
-(id)accountMailCreationURLRequest:(id)arg1 andError:(id*)arg2 ;
-(id)accountCreationURLRequest:(id*)arg1 ;
-(id)accountContinuationURLRequest:(id)arg1 andError:(id*)arg2 ;
-(id)appleIDURLRequestForURL:(id)arg1 method:(id)arg2 accountID:(id)arg3 error:(id*)arg4 ;
-(id)iCloudURLRequestForURL:(id)arg1 method:(id)arg2 accountID:(id)arg3 error:(id*)arg4 ;
-(id)iCloudURLRequestForKey:(id)arg1 method:(id)arg2 accountID:(id)arg3 error:(id*)arg4 ;
-(id)urlRequestForKey:(id)arg1 method:(id)arg2 accountID:(id)arg3 error:(id*)arg4 ;
-(id)accountStorageURLRequest:(id)arg1 dsid:(id)arg2 authTokent:(id)arg3 storageInfo:(id)arg4 withQueryParam:(id)arg5 ;
-(id)urlRequestForAppleIDPagesInfo:(id)arg1 forAccountID:(id)arg2 ;
-(id)urlRequestForiCloudPagesInfo:(id)arg1 forAccountID:(id)arg2 ;
-(id)accountNotesCreationURLRequest:(id)arg1 andError:(id*)arg2 ;
-(id)accountStorageURLRequest:(id)arg1 dsid:(id)arg2 authTokent:(id)arg3 withQueryParam:(id)arg4 ;
-(id)mbRepairInfoForAccount:(id)arg1 password:(id)arg2 error:(id*)arg3 ;
-(id)urlRequestForMBHelpInfo:(id)arg1 error:(id*)arg2 ;
-(id)mbHelpInfoForTopic:(CFStringRef)arg1 error:(id*)arg2 ;
-(id)urlRequestFromInfo:(id)arg1 forAccountID:(id)arg2 ;
-(id)urlRequestForMBAccoutCreation:(id)arg1 error:(id*)arg2 ;
-(id)urlRequestForMBAccoutContinuation:(id)arg1 continutationHeaderValue:(id)arg2 error:(id*)arg3 ;
-(id)urlRequestForMBRepairForAccount:(id)arg1 password:(id)arg2 delegateData:(id)arg3 error:(id*)arg4 ;
-(id)urlRequestForMBAccountIDInfo:(id*)arg1 ;
-(id)urlRequestForMBiCloudInfo:(id*)arg1 ;
-(id)urlRequestForURL:(id)arg1 method:(id)arg2 accountID:(id)arg3 error:(id*)arg4 ;
@end

