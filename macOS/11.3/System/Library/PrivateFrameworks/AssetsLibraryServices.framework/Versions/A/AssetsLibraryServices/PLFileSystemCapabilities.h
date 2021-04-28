/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface PLFileSystemCapabilities : NSObject {

	unsigned _interfacesCapabilities;
	unsigned _nativeCommonAttributes;
	char _fstypename[16];
	char _isReadOnly;
	char _isLocalVolume;
	char _isInternalVolume;
	char _isRootFileSystemVolume;
	char _isValid;
	NSError* _error;

}

@property (readonly) char isReadOnly;                                                       //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (readonly) char isCloneCapable; 
@property (readonly) char isWholeFileLockCapable; 
@property (readonly) char isGenCountCapable; 
@property (readonly) char isSecludeRenameCapable; 
@property (readonly) char isLocalVolume;                                                    //@synthesize isLocalVolume=_isLocalVolume - In the implementation block
@property (readonly) char isInternalVolume;                                                 //@synthesize isInternalVolume=_isInternalVolume - In the implementation block
@property (readonly) char isRootFileSystemVolume;                                           //@synthesize isRootFileSystemVolume=_isRootFileSystemVolume - In the implementation block
@property (readonly) NSString * fileSystemTypeName; 
@property (readonly) char isNetworkVolume; 
@property (readonly) char isCentralizedCacheDeleteCapable; 
@property (getter=isWholeFileLockCapable,readonly) char isCoreDataCapable; 
@property (getter=isGenCountCapable,readonly) char isCloudPhotoLibraryCapable; 
@property (readonly) char isValid;                                                          //@synthesize isValid=_isValid - In the implementation block
@property (readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
+(unsigned long long)minimumAvailableBytesRequiredForLibraryOpen;
+(id)capabilitiesWithURL:(id)arg1 ;
-(id)description;
-(char)isValid;
-(NSError *)error;
-(char)isReadOnly;
-(char)isCloneCapable;
-(char)isWholeFileLockCapable;
-(char)isGenCountCapable;
-(char)isSecludeRenameCapable;
-(NSString *)fileSystemTypeName;
-(char)isNetworkVolume;
-(char)isCentralizedCacheDeleteCapable;
-(char)determineCapabilitiesWithURL:(id)arg1 error:(id*)arg2 ;
-(char)isLocalVolume;
-(char)isInternalVolume;
-(char)isRootFileSystemVolume;
@end

