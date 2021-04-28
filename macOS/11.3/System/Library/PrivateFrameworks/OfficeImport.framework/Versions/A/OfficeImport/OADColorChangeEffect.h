/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {

	OADColor* mFromColor;
	OADColor* mToColor;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setFromColor:(id)arg1 ;
-(void)setToColor:(id)arg1 ;
-(id)fromColor;
-(id)toColor;
-(void)setStyleColor:(id)arg1 ;
@end

