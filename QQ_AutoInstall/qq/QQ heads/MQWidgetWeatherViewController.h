//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MQLocationManager, MQWeatherChartView, MQWeatherWidget, NSImageView, NSLayoutConstraint, NSString, NSTextField, NSTimer, QQWeatherForecastInfo, QQWeatherForecastManager;

@interface MQWidgetWeatherViewController : NSViewController
{
    MQWeatherWidget *_widget;
    NSImageView *_weatherBigImgView;
    NSTextField *_temperatureView;
    NSTextField *_weatherInfoView;
    NSImageView *_airQualityImgView;
    NSTextField *_locationView;
    NSImageView *_locationImgView;
    MQWeatherChartView *_lineChartView;
    NSLayoutConstraint *_kWeatherInfoWidthConstraint;
    NSLayoutConstraint *_kWeatherLocationWidthConstraint;
    NSLayoutConstraint *_kTemperatureViewHeightConstraint;
    NSLayoutConstraint *_kWeatherInfo_Location_offsetConstraint;
    NSLayoutConstraint *_kLocationLeadingOffsetConstraint;
    NSTimer *_refTimer;
    MQLocationManager *_locManager;
    QQWeatherForecastManager *_wtrManager;
    QQWeatherForecastInfo *_forecast;
    BOOL _isAutoLocatingMode;
    NSString *_requestLocation;
    NSString *_showLocation;
    BOOL _cacheDidLoad;
    unsigned long long _widgetMode;
}

@property(readonly, nonatomic) unsigned long long widgetMode; // @synthesize widgetMode=_widgetMode;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isBetweenFromDate:(id)arg1 toDate:(id)arg2;
- (void)showWeatherWindow;
- (void)setAndLayoutLocationViewAttribute:(id)arg1;
- (void)locatingDidEnd:(id)arg1;
- (void)isLocating;
- (void)onGetWeatherFailed;
- (void)onGetWeatherCompleted:(id)arg1;
- (void)widgetModeDidChanged;
- (void)setMode:(unsigned long long)arg1;
- (void)timerStop;
- (void)changeTimeInterval:(double)arg1;
- (void)loadWeatherCache;
- (void)saveWeatherCache;
- (void)onLocationDidSelected:(id)arg1;
- (void)onGetWeather:(id)arg1;
- (void)requestWeatherData:(id)arg1;
- (void)onGetLocation:(id)arg1;
- (void)requestLocationData:(id)arg1;
- (void)loadData;
- (void)setRequestAndShowInfo:(id)arg1;
- (void)setupUI;
- (void)viewDidLoad;
- (void)setControlWidget:(id)arg1;
- (void)startRequest;
- (void)awakeFromNib;

@end

