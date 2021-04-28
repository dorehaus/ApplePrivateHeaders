/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKCompatibilityDelegate <NSObject>
@optional
-(char)isExportSupportedForType:(id)arg1 exporterOptions:(id)arg2 documentRoot:(id)arg3;
-(id)backwardsCompatibleTypeForType:(id)arg1;
-(id)unsupportedExportMessageStringForType:(id)arg1;

@required
-(Class)exporterClassForType:(id)arg1 options:(id)arg2;
-(id)nestedDocumentFilename;
-(Class)importerClassForType:(id)arg1 path:(id)arg2;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(char)isTCMessageExceptionErrorDomain:(id)arg1;
-(char)isSageDocumentType:(id)arg1;
-(char)isIBADocumentType:(id)arg1;
-(char)isTextOnlyType:(id)arg1;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;

@end

