/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUINamedRenditionInfo : NSObject <NSCopying> {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)archivedData;
-(char)isEqualToNamedRenditionInfo:(id)arg1 ;
-(char)contentPresentForAttribute:(int)arg1 ;
-(char)diverseContentPresentForAttribute:(int)arg1 ;
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)bitwiseAndWith:(id)arg1 ;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned short)getValueOfAttribute:(int)arg1 ;
-(unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2 ;
-(char)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2 ;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned long long)numberOfBitsSet;
-(void)decrementValue:(long long*)arg1 forAttribute:(int)arg2 ;
-(void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3 ;
@end

