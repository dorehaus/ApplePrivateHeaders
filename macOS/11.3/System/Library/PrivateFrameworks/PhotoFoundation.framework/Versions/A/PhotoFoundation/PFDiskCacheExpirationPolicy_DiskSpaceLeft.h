/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDiskCacheExpirationPolicy.h>

@interface PFDiskCacheExpirationPolicy_DiskSpaceLeft : PFDiskCacheExpirationPolicy {

	long long _diskPercentageToLeaveFree;

}
+(id)expirationPolicyWithPercentageOfDiskToLeaveFree:(long long)arg1 ;
-(id)description;
-(long long)calculateOverage:(long long)arg1 freeSpace:(long long)arg2 volumeSizeInBytes:(long long)arg3 ;
-(id)initWithPercentageToLeaveFree:(long long)arg1 ;
@end
