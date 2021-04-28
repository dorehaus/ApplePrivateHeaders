/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLResourceDataStoreKey.h>

@class NSString;

@interface PLResourceDataStoreKey : NSObject <PLResourceDataStoreKey>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)refreshSandboxExtensionForURL:(id)arg1 assetID:(id)arg2 error:(id*)arg3 ;
+(char)refreshSandboxExtensionForURL:(id)arg1 libraryID:(id)arg2 assetUUID:(id)arg3 error:(id*)arg4 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(char)isEqualToKey:(id)arg1 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
@end
