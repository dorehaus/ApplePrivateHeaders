/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/Versions/A/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKMediaName : NSObject {

	NSString* _mediaName;
	NSString* _mediaClass;
	NSString* _baseName;
	double _widthInUnits;
	double _heightInUnits;
	NSString* _widthStr;
	long long _units;
	double _conversionFactor;

}

@property (retain) NSString * mediaName;                     //@synthesize mediaName=_mediaName - In the implementation block
@property (retain) NSString * mediaClass;                    //@synthesize mediaClass=_mediaClass - In the implementation block
@property (retain) NSString * baseName;                      //@synthesize baseName=_baseName - In the implementation block
@property (retain) NSString * widthStr;                      //@synthesize widthStr=_widthStr - In the implementation block
@property (assign) double widthInUnits;                      //@synthesize widthInUnits=_widthInUnits - In the implementation block
@property (assign) double heightInUnits;                     //@synthesize heightInUnits=_heightInUnits - In the implementation block
@property (assign) long long units;                          //@synthesize units=_units - In the implementation block
@property (assign) double conversionFactor;                  //@synthesize conversionFactor=_conversionFactor - In the implementation block
@property (readonly) char isRoll; 
@property (readonly) double width; 
@property (readonly) double height; 
@property (retain,readonly) NSString * unitStr; 
+(id)pkMediaNameWithString:(id)arg1 ;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(double)width;
-(double)height;
-(long long)units;
-(void)setUnits:(long long)arg1 ;
-(NSString *)baseName;
-(void)setBaseName:(NSString *)arg1 ;
-(NSString *)mediaName;
-(void)setMediaName:(NSString *)arg1 ;
-(char)isRoll;
-(NSString *)unitStr;
-(double)widthInUnits;
-(double)heightInUnits;
-(void)parseMediaName:(id)arg1 ;
-(void)setMediaClass:(NSString *)arg1 ;
-(void)setWidthStr:(NSString *)arg1 ;
-(void)setConversionFactor:(double)arg1 ;
-(void)setWidthInUnits:(double)arg1 ;
-(void)setHeightInUnits:(double)arg1 ;
-(NSString *)mediaClass;
-(double)conversionFactor;
-(NSString *)widthStr;
@end

