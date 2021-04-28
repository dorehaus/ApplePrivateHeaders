/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/Versions/A/MSUDataAccessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MSUDataAccessor/LPMedia.h>

@interface LPAPFSContainer : LPMedia
+(id)supportedContentTypes;
+(id)allAPFSContainers;
+(id)diagsContainer;
-(id)volumesWithRole:(int)arg1 ;
-(id)addVolumeWithName:(id)arg1 role:(int)arg2 caseSensitive:(char)arg3 reserveSize:(long long)arg4 quotaSize:(long long)arg5 pairedVolume:(id)arg6 error:(id*)arg7 ;
-(id)physicalStores;
-(id)prebootVolume;
-(id)recoveryVolume;
-(id)updateVolume;
-(id)volumes;
@end

