/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/IPAAutoSettings.h>

@interface PAStraightenAutoSettings : IPAAutoSettings {

	double _straightenAngleInDegreesCCW;
	long long _xOrigin;
	long long _yOrigin;
	unsigned long long _width;
	unsigned long long _height;

}

@property (assign,nonatomic) double straightenAngleInDegreesCCW;              //@synthesize straightenAngleInDegreesCCW=_straightenAngleInDegreesCCW - In the implementation block
@property (assign,nonatomic) long long xOrigin;                               //@synthesize xOrigin=_xOrigin - In the implementation block
@property (assign,nonatomic) long long yOrigin;                               //@synthesize yOrigin=_yOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long width;                        //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                       //@synthesize height=_height - In the implementation block
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(char)_applyArchiveDictionary:(id)arg1 ;
-(long long)yOrigin;
-(void)setYOrigin:(long long)arg1 ;
-(void)_archiveIntoDictionary:(id)arg1 ;
-(double)straightenAngleInDegreesCCW;
-(long long)xOrigin;
-(void)setStraightenAngleInDegreesCCW:(double)arg1 ;
-(void)setXOrigin:(long long)arg1 ;
@end
