/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@interface ICNFMCQuotaUsage : NSObject {

	SCD_Struct_IC8 _current;
	SCD_Struct_IC8 _maximum;

}

@property (assign,nonatomic) SCD_Struct_IC8 current;              //@synthesize current=_current - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC8 maximum;              //@synthesize maximum=_maximum - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCD_Struct_IC8)maximum;
-(void)setMaximum:(SCD_Struct_IC8)arg1 ;
-(void)setCurrent:(SCD_Struct_IC8)arg1 ;
-(SCD_Struct_IC8)current;
-(void)incrementCurrentBy:(SCD_Struct_IC8)arg1 ;
-(void)decrementCurrentBy:(SCD_Struct_IC8)arg1 ;
@end

