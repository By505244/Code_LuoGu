
    <html xmlns="http://www.w3.org/1999/xhtml"><head>
    <meta charset="utf-8">
    <meta name="description" content="2233���̨����ϵͳ">
    <meta name="keywords" content="2233���̨����ϵͳ">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="flag1" content="width=device-width, initial-scale=1.0">
    <meta name="flag2" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="common.css">
    <script type="text/javascript" src="jquery-3.3.1.min.js"></script>
    <script type="text/javascript" src="common.js"></script>
    <link href="css/demo.css" rel="stylesheet" type="text/css">
    <script src="js/jquery-1.10.2.min.js" type="text/javascript"></script>
    <!--Framework-->
    <script src="js/jquery-1.10.2.min.js" type="text/javascript"></script>
    <script src="js/jquery-ui.js" type="text/javascript"></script>
    <!--End Framework-->
     <script src="js/jquery.ffform.js" type="text/javascript"></script>
    <script type="text/javascript">
        $(document).ready(function () {
            $('#form').ffform({ animation: 'fade', submitButton: '#submit', validationIndicator: '#validation', errorIndicator: '#error', successIndicator: '#success', 'fields': [{ 'id': 'name', required: true, requiredMsg: 'Name is required', type: 'alpha', validate: true, msg: 'Invalid Name' }, { 'id': 'message', required: false, type: 'text', validate: false, msg:' '}] });
        });
    </script>
<script>
    $.ajax({
    url: "api/admin",
    type: "get",
    success:function (data) {
        console.log(data);
        if (data.code == 200){
            // �����ֵ��ǰ����ת
            var input = document.getElementById("flag1");
            input.value = String(data.data);
        } else {
            // ���ûֵ
            $('#flag1').html("�ӿ��쳣�����Ժ����ԡ�");
        }
    }
})
</script><script>
$.ajax({
    url: "api/ctf/2",
    type: "get",
    success:function (data) {
        console.log(data);
        if (data.code == 200){
            // �����ֵ��ǰ����ת
            $('#flag2').html("flag2: " + data.data);
        } else {
            // ���ûֵ
            $('#flag2').html("��Ҫʹ��bilibili Security Browser��������ʡ�");
        }
    }
})
</script></head>


<body style="">
    
    <div class="banner">
        <!--<img src="banner.png" alt="��������" ondragstart="return false;">-->
	<img src="api/images?file=banner.png" alt="��������" ondragstart="return true;">
    </div>
    <div class="content">


    <section id="getintouch" class="flipInX animated">
        <div class="container" style="border-bottom: 0;">
            <h1>
                <input id="flag1" type="hidden" values="flag1" value="04d7dc44-770a74fe-0b5d4bd8-5ddf6c91">
            
        </div>
        <div class="container">
        </div>
    </section>
    </div>




</body></html>
