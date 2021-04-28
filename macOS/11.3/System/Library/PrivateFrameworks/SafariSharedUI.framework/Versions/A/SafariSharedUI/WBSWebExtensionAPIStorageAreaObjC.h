/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSWebExtensionAPIObject.h>

@interface WBSWebExtensionAPIStorageAreaObjC : WBSWebExtensionAPIObject {

	long long _storageType;

}

@property (nonatomic,readonly) WBSWebExtensionAPIStorageArea* cpp; 
@property (nonatomic,readonly) double quotaBytes; 
@property (nonatomic,readonly) double quotaBytesPerItem; 
@property (nonatomic,readonly) double maxItems; 
@property (nonatomic,readonly) double maxWriteOperationsPerHour; 
@property (nonatomic,readonly) double maxWriteOperationsPerMinute; 
+(id)storageAreaWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(char)arg3 storageType:(long long)arg4 ;
-(WBSWebExtensionAPIStorageArea*)cpp;
-(char)isPropertyAllowed:(id)arg1 ;
-(void)getItems:(id)arg1 browserContextController:(id)arg2 context:(OpaqueJSContextRef)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)getBytesInUseForItems:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)setItems:(id)arg1 browserContextController:(id)arg2 context:(OpaqueJSContextRef)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)removeItems:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)clearWithBrowserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(double)quotaBytes;
-(double)quotaBytesPerItem;
-(double)maxItems;
-(double)maxWriteOperationsPerHour;
-(double)maxWriteOperationsPerMinute;
-(id)_decodeJSONStringRepresentations:(id)arg1 context:(OpaqueJSContextRef)arg2 outErrorDescription:(id*)arg3 ;
-(id)_storageAreaAPINamePrefix;
-(void)_getValuesForAllKeysForBrowserContextController:(id)arg1 context:(OpaqueJSContextRef)arg2 completionHandler:(id)arg3 ;
-(void)_getValuesForKeysWithDefaultValues:(id)arg1 browserContextController:(id)arg2 context:(OpaqueJSContextRef)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)_getValuesForKeys:(id)arg1 browserContextController:(id)arg2 context:(OpaqueJSContextRef)arg3 completionHandler:(id)arg4 ;
-(void)_initWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(char)arg3 storageType:(long long)arg4 ;
@end
