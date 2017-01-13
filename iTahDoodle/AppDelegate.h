//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by Vasilii on 11.01.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>
//объявление вспомогательной функции для получения пути к каталогу на диске, который будет испоьщоваться для хранения списка задача
NSString *docPath(void);

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UITableView *taskTable;//табличное представление для отображения списка задач
    UITextField *taskField;//текстовое поле для ввода новой задачи
    UIButton *insertButton;//кнопка для включения введеной задачи в таблицу
    NSMutableArray *tasks;//изменяемый массив в котором будут хранится задачи
}
-(void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;


@end

