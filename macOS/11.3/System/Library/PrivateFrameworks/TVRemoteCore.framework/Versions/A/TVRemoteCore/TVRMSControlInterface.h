/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVRMSControlInterface : NSObject {

	char _supportsSpeakerSelection;
	char _supportsVolumeControl;
	char _supportsDirectionalControl;

}

@property (assign,nonatomic) char supportsSpeakerSelection;                //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) char supportsVolumeControl;                   //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) char supportsDirectionalControl;              //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(char)supportsVolumeControl;
-(void)setSupportsSpeakerSelection:(char)arg1 ;
-(void)setSupportsVolumeControl:(char)arg1 ;
-(void)setSupportsDirectionalControl:(char)arg1 ;
-(char)supportsSpeakerSelection;
-(char)supportsDirectionalControl;
@end

