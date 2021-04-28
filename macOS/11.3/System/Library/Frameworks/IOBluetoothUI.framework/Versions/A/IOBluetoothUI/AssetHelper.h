/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AssetHelper : NSObject {

	NSMutableDictionary* mDictCache;

}
+(id)findLocalizedStringForKey:(id)arg1 ;
+(id)findLocalizedStringForKey:(id)arg1 default:(id)arg2 ;
+(id)loadAssetsFromFile:(id)arg1 ;
+(id)getAssetPathsFilenames;
+(id)loadAllAssets;
+(id)strFromVendorID:(unsigned short)arg1 andProductID:(unsigned short)arg2 ;
+(id)strFromProductID:(unsigned short)arg1 ;
+(id)strFromColorID:(unsigned char)arg1 ;
+(id)resourcePathFromBundle:(id)arg1 withResourceNamed:(id)arg2 ;
+(id)loadImageFromBundle:(id)arg1 withResourceNamed:(id)arg2 ;
+(id)sharedAssetHelper;
-(id)init;
-(id)getAssetDictForAppleProductID:(unsigned short)arg1 ;
-(id)getCustomInfoForVID:(unsigned short)arg1 andPID:(unsigned short)arg2 ;
-(id)getDeviceNameForAppleProductID:(unsigned short)arg1 ;
-(id)getImageURLForAppleProductID:(unsigned short)arg1 andColor:(unsigned char)arg2 ;
-(id)getImageForAppleProductID:(unsigned short)arg1 andColor:(unsigned char)arg2 ;
@end

