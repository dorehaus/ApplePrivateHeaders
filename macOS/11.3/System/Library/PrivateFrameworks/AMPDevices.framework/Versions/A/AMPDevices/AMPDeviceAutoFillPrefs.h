/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPDevices.framework/Versions/A/AMPDevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPDevices/AMPDevices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AMPDeviceAutoFillPrefs : NSObject <NSCopying, NSSecureCoding> {

	char _autoFillHigherRatedSongs;
	char _autoFillRandomSongs;
	char _autoFillReplaceSongs;
	unsigned long long _autoFillSourcePlaylistID;
	unsigned long long _autoFillReserveFreeBytes;
	unsigned long long _autoFillTotalDiskBytes;

}

@property (assign,nonatomic) char autoFillHigherRatedSongs;                            //@synthesize autoFillHigherRatedSongs=_autoFillHigherRatedSongs - In the implementation block
@property (assign,nonatomic) char autoFillRandomSongs;                                 //@synthesize autoFillRandomSongs=_autoFillRandomSongs - In the implementation block
@property (assign,nonatomic) char autoFillReplaceSongs;                                //@synthesize autoFillReplaceSongs=_autoFillReplaceSongs - In the implementation block
@property (assign,nonatomic) unsigned long long autoFillSourcePlaylistID;              //@synthesize autoFillSourcePlaylistID=_autoFillSourcePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long autoFillReserveFreeBytes;              //@synthesize autoFillReserveFreeBytes=_autoFillReserveFreeBytes - In the implementation block
@property (assign,nonatomic) unsigned long long autoFillTotalDiskBytes;                //@synthesize autoFillTotalDiskBytes=_autoFillTotalDiskBytes - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)autoFillHigherRatedSongs;
-(void)setAutoFillHigherRatedSongs:(char)arg1 ;
-(char)autoFillRandomSongs;
-(void)setAutoFillRandomSongs:(char)arg1 ;
-(char)autoFillReplaceSongs;
-(void)setAutoFillReplaceSongs:(char)arg1 ;
-(unsigned long long)autoFillSourcePlaylistID;
-(void)setAutoFillSourcePlaylistID:(unsigned long long)arg1 ;
-(unsigned long long)autoFillReserveFreeBytes;
-(void)setAutoFillReserveFreeBytes:(unsigned long long)arg1 ;
-(unsigned long long)autoFillTotalDiskBytes;
-(void)setAutoFillTotalDiskBytes:(unsigned long long)arg1 ;
@end
