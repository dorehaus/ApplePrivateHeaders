/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FamilyControls/FamilyControls-Structs.h>
@class NSMutableDictionary;

@interface FCWidget : NSObject {

	NSMutableDictionary* _dictionary;

}
+(id)widgetWithDictionary:(id)arg1 ;
+(id)installedWidgets;
+(id)widgetWithPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)path;
-(void)setBundleID:(id)arg1 ;
-(id)bundleID;
-(id)displayName;
-(void)setPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)plistRepresentation;
@end

